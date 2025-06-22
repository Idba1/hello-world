const drinkContainer = document.getElementById('drinkContainer');
const groupList = document.getElementById('groupList');
const groupCount = document.getElementById('groupCount');
const modalContent = document.getElementById('modalContent');
const drinkModal = new bootstrap.Modal(document.getElementById('drinkModal'));

let groupedDrinks = [];

async function fetchAllDrinks() {
    let allDrinks = [];

    for (let ch = 97; ch <= 122; ch++) {
        const letter = String.fromCharCode(ch);
        const res = await fetch(`https://www.thecocktaildb.com/api/json/v1/1/search.php?f=${letter}`);
        const data = await res.json();
        if (data.drinks) {
            allDrinks = allDrinks.concat(data.drinks);
        }
    }

    showDrinks(allDrinks);
}

async function fetchDrinks(query = 'margarita') {
    const res = await fetch(`https://www.thecocktaildb.com/api/json/v1/1/search.php?s=${query}`);
    const data = await res.json();
    showDrinks(data.drinks);
}

function showDrinks(drinks) {
    drinkContainer.innerHTML = '';
    if (!drinks) {
        drinkContainer.innerHTML = '<p class="text-danger">No drinks found.</p>';
        return;
    }

    drinks.forEach(drink => {
        const div = document.createElement('div');
        div.className = 'card mb-3';
        div.innerHTML = `
      <div class="row g-0">
        <div class="col-md-4">
          <img src="${drink.strDrinkThumb}" class="img-fluid rounded-start" alt="${drink.strDrink}">
        </div>
        <div class="col-md-8">
          <div class="card-body">
            <h5 class="card-title">${drink.strDrink}</h5>
            <p class="card-text"><strong>Category:</strong> ${drink.strCategory}</p>
            <p class="card-text">${drink.strInstructions.slice(0, 15)}...</p>
            <button class="btn btn-success me-2" onclick="addToGroup('${drink.strDrink}')">Add to Group</button>
            <button class="btn btn-info" onclick="showDetails(${drink.idDrink})">Details</button>
          </div>
        </div>
      </div>
    `;
        drinkContainer.appendChild(div);
    });
}

function searchDrinks() {
    const query = document.getElementById('searchInput').value.trim();
    fetchDrinks(query || 'margarita');
}

function addToGroup(drinkName) {
    if (groupedDrinks.length >= 7) {
        alert("You can't add more than 7 drinks to the group.");
        return;
    }
    if (!groupedDrinks.includes(drinkName)) {
        groupedDrinks.push(drinkName);
        updateGroupUI();
    }
}

function updateGroupUI() {
    groupList.innerHTML = '';
    groupedDrinks.forEach(drink => {
        const li = document.createElement('li');
        li.className = 'list-group-item';
        li.textContent = drink;
        groupList.appendChild(li);
    });
    groupCount.textContent = groupedDrinks.length;
}

async function showDetails(id) {
    const res = await fetch(`https://www.thecocktaildb.com/api/json/v1/1/lookup.php?i=${id}`);
    const data = await res.json();
    const drink = data.drinks[0];

    modalContent.innerHTML = `
    <h3>${drink.strDrink}</h3>
    <img src="${drink.strDrinkThumb}" class="img-fluid mb-3" />
    <p><strong>Category:</strong> ${drink.strCategory}</p>
    <p><strong>Alcoholic:</strong> ${drink.strAlcoholic}</p>
    <p><strong>Glass:</strong> ${drink.strGlass}</p>
    <p><strong>Instructions:</strong> ${drink.strInstructions}</p>
    <p><strong>Ingredients:</strong> 
      ${[drink.strIngredient1, drink.strIngredient2, drink.strIngredient3].filter(Boolean).join(', ')}
    </p>
  `;
    drinkModal.show();
}

fetchAllDrinks();
