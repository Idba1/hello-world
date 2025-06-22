
const mealContainer = document.getElementById('mealContainer');
const searchInput = document.getElementById('searchInput');
const modalContent = document.getElementById('modalContent');
const mealModal = new bootstrap.Modal(document.getElementById('mealModal'));

async function fetchMeals(query = '') {
  const url = `https://www.themealdb.com/api/json/v1/1/search.php?s=${query}`;
  const res = await fetch(url);
  const data = await res.json();
  displayMeals(data.meals);
}

function displayMeals(meals) {
  mealContainer.innerHTML = '';
  if (!meals) {
    mealContainer.innerHTML = '<p class="text-center">🍔 Data not found.</p>';
    return;
  }

  meals.forEach(meal => {
    const col = document.createElement('div');
    col.className = 'col-md-4 mb-4';

    col.innerHTML = `
      <div class="card meal-card h-100">
        <img src="${meal.strMealThumb}" class="card-img-top" alt="${meal.strMeal}">
        <div class="card-body">
          <h5 class="card-title">${meal.strMeal}</h5>
          <button class="btn btn-primary" onclick="loadMealDetails(${meal.idMeal})">Details</button>
        </div>
      </div>
    `;
    mealContainer.appendChild(col);
  });
}

async function loadMealDetails(id) {
  const res = await fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`);
  const data = await res.json();
  const meal = data.meals[0];
  modalContent.innerHTML = `
    <h3>${meal.strMeal}</h3>
    <img src="${meal.strMealThumb}" class="img-fluid mb-3" alt="${meal.strMeal}">
    <p><strong>Category:</strong> ${meal.strCategory}</p>
    <p><strong>Area:</strong> ${meal.strArea}</p>
    <p><strong>Instructions:</strong><br>${meal.strInstructions}</p>
    <a href="${meal.strYoutube}" target="_blank" class="btn btn-danger">Watch Video</a>
  `;
  mealModal.show();
}

searchInput.addEventListener('input', () => {
  const query = searchInput.value.trim();
  fetchMeals(query);
});

fetchMeals();
