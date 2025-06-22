// problem-1
var result = 50;

if (result < 0 || result > 100) {
    console.log("invalid result");
} else if (result < 40) {
    console.log("tumi C grade paico");
} else if (result < 60) {
    console.log("tumi B grade paico");
} else if (result < 70) {
    console.log("tumi A- grade paico");
} else if (result < 80) {
    console.log("tumi A grade paico");
} else {
    console.log("tumi A+ grade paico");
}
var result = 50;

if (result < 0 || result > 100) {
    console.log("invalid result");
} else if (result < 40) {
    console.log("tumi C grade paico");
} else if (result < 60) {
    console.log("tumi B grade paico");
} else if (result < 70) {
    console.log("tumi A- grade paico");
} else if (result < 80) {
    console.log("tumi A grade paico");
} else {
    console.log("tumi A+ grade paico");
}

// problem-2
var num = 20;
if (num % 2 === 0) {
    console.log("Even Number");
} else {
    console.log("Odd Number");
}

// problem-3
var numbers = [12, 3, 19, 5, 1, 15, 8, 10, 4, 18, 6, 2, 13, 20, 7, 14, 11, 9, 17, 16];

for (var i = 0; i < numbers.length - 1; i++) {
    for (var j = i + 1; j < numbers.length; j++) {
        if (numbers[i] > numbers[j]) {
            var temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
        }
    }
}

for (var k = 0; k < numbers.length; k++) {
    console.log(numbers[k]);
}


// problem-4
var year = 2024;

if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0) {
    console.log(year + " is a leap year");
} else {
    console.log(year + " is not a leap year");
}


// problem-5
for (var i = 1; i <= 50; i++) {
    if (i % 3 === 0 && i % 5 === 0) {
        console.log(i);
    }
}


// problem-6

const checkFriends = (array) => {
    let biggestName = array[0];

    for (let i = 0; i < array.length; i++) {
        const element = array[i];

        if (element.length > biggestName.length) {
            biggestName = element;
        }

    }

    return biggestName;

}

const frinds = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];
const bigfriends = checkFriends(frinds);

console.log(bigfriends);


// problem-7
var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
var unique = [];

for (var i = 0; i < numbers.length; i++) {
    var isDuplicate = false;

    for (var j = 0; j < unique.length; j++) {
        if (numbers[i] === unique[j]) {
            isDuplicate = true;
            break;
        }
    }

    if (!isDuplicate) {
        unique.push(numbers[i]);
    }
}

for (var k = 0; k < unique.length; k++) {
    console.log(unique[k]);
}








// problem-8

var biggest = numbers[0];

for (var i = 1; i < numbers.length; i++) {
    if (numbers[i] > biggest) {
        biggest = numbers[i];
    }
}

console.log("Biggest number is: " + biggest);


// problem-9
function monthlySavings(payments, livingCost) {
    if (!Array.isArray(payments) || typeof livingCost !== "number") {
        return "invalid input";
    }

    let totalIncome = 0;
    for (let i = 0; i < payments.length; i++) {
        let income = payments[i];
        if (typeof income !== "number") return "invalid input";
        if (income > 3000) {
            income = income - (income * 0.2);
        }
        totalIncome += income;
    }

    const savings = totalIncome - livingCost;

    if (savings <= 0) {
        return "earn more";
    } else {
        return savings;
    }
}

console.log(monthlySavings([1000, 2000, 3000], 5400));
console.log(monthlySavings([1000, 2000, 2500], 5000));
console.log(monthlySavings([900, 2700, 3400], 10000));
console.log(monthlySavings(100, [900, 2700, 3400]));
console.log(monthlySavings([900, "test", 3400], 2000));
