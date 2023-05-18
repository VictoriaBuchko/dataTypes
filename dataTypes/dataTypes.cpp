#include <iostream>
#include <iomanip>//9 task
using namespace std;

int main() {
    cout << "1 TASK\n";
    //Вести с клавиатуры два трёхзначных числа и поменять в них средние цифры

    int firstNumber;
    int secondNumber;
    int hundredsF;
    int hundredsS;
    int tensF;
    int tensS;
    int unitsF;
    int unitsS;

    cout << "Enter the first three-digit number: ";
    cin >> firstNumber;
    cout << "Enter the second three-digit number: ";
    cin >> secondNumber;

    hundredsF = firstNumber / 100 % 10;
    hundredsS = secondNumber / 100 % 10;

    tensF = firstNumber / 10 % 10;
    tensS = secondNumber / 10 % 10;

    unitsF = firstNumber / 1 % 10;
    unitsS = firstNumber / 1 % 10;

    cout << hundredsF << tensS << unitsF << "\n";
    cout << hundredsS << tensF << unitsS << "\n";

    cout << "2 TASK\n";
    cout << "---------------------------------------------------------\n";
    //Ввести четырёхзначное число и посчитать сумму первого 
    //и третьего числа и разность второй и четвёртой цифры

    int fourDigitNumber;
    int thousands;
    int hundreds;
    int tens;
    int units;
    int sum;
    int difference;

    cout << "Enter a four-digit number: ";
    cin >> fourDigitNumber;

    thousands = fourDigitNumber / 1000 % 10;
    hundreds = fourDigitNumber / 100 % 10;
    tens = fourDigitNumber / 10 % 10;
    units = fourDigitNumber % 10;

    sum = thousands + tens;
    difference = hundreds - units;

    cout << "Sum of the first and third digits: " << sum << "\n";
    cout << "Difference between the second and fourth digits: " << difference << "\n";

    cout << "3 TASK\n";
    cout << "---------------------------------------------------------\n";
    //Ввести с клавиатуры трёхзначное число и удалить из него среднюю цифру

    int threeDigitNumber;
    int hundred;
    int unit;

    cout << "Enter a three-digit number: ";
    cin >> threeDigitNumber;

    hundred = threeDigitNumber / 100;
    unit = threeDigitNumber % 10;

    cout << "Number without the middle digit: " << hundred << units << "\n";

    cout << "4 TASK\n";
    cout << "---------------------------------------------------------\n";
    //Напиши программу которая предлагает пользователю ввести сумму денежного вклада в гривнах
    //, а также процент годовых которые выплачивают банк.
    //Определить сумму денег выкладываемых банков вкладчику каждый месяц

    double depositAmount;
    double annualInterestRate;
    double monthlyInterestRate;
    double monthlyDeposit;

    cout << "Enter the deposit amount in UAH: ";
    cin >> depositAmount;
    cout << "Enter the annual interest rate (%): ";
    cin >> annualInterestRate;

    monthlyInterestRate = annualInterestRate / 12 / 100;
    monthlyDeposit = depositAmount * monthlyInterestRate;

    cout << "The month deposits is " << monthlyDeposit << "\n";


    cout << "5 TASK\n";
    cout << "---------------------------------------------------------\n";
    //Сколько товара ценой y можно купить на x гривен и сколько получить сдачи?

    int money;
    float price;
    int quantity;
    float change;

    cout << "Enter the total money available: ";
    cin >> money;
    cout << "Enter the price of item: ";
    cin >> price;

    quantity = money / price;
    change = money % int(price);

    cout << "The number of things that can be bought: " << quantity << "\n";
    cout << "Remaining change: " << change << " UAH\n";

    cout << "6 TASK\n";
    cout << "---------------------------------------------------------\n";
    //Написать программу которая переводит фунты в килограммы. 
    //1 фунт равен 405.9 г задаётся в программе как констант.
    //A затем реализовать обратный переход из килограммов в фунты

    const double poundsToGrams = 405.9;//в интернете указан другой коэффициент, в рамках задания использую этот
    double pounds;
    double kilograms;
    double gramsToPounds;
    double convertedPounds;

    cout << "Enter the weight in pounds: ";
    cin >> pounds;

    kilograms = pounds * poundsToGrams / 1000;

    cout << "Weight in kilograms: " << kilograms << " kg" << endl;


    gramsToPounds = 1 / poundsToGrams;//коэффициент для обратного перевода из килограммов в фунты
    convertedPounds = kilograms * 1000 * gramsToPounds;

    cout << "Weight in pounds: " << convertedPounds << " lb" << endl;

    cout << "7 TASK\n";
    cout << "---------------------------------------------------------\n";
    //Ввести длину ширину и высоту комнаты. посчитать сколько краски уйдёт
    //на покраску стен этой комнаты если на 1 м² стены приходится n л краски и m%
    //поверхности стен занимает окна и двери, также рассчитать общую стоимость краски
    //с учётом того что 1 л краски стоит r гривен х
    double length;
    double width;
    double height;
    double paintPerSquareMeter;
    double objects;
    double paintCostPerLiter;
    double area;
    double objectsArea;
    double wallArea;
    double paintNeeded;
    double totalPaintCost;

    cout << "Enter the length of the room (m): ";
    cin >> length;
    cout << "Enter the width of the room (m): ";
    cin >> width;
    cout << "Enter the height of the room (m): ";
    cin >> height;
    cout << "Enter the amount of paint required per square meter (liters): ";
    cin >> paintPerSquareMeter;
    cout << "Enter the cost of paint per liter (in UAH): ";
    cin >> paintCostPerLiter;
    cout << "Enter what percentage of the area is occupied by windows and doors: ";
    cin >> objects;

    area = 2 * (length + width) * height;

    objectsArea = area * (objects / 100);

    wallArea = area - objectsArea;

    paintNeeded = wallArea * paintPerSquareMeter;

    totalPaintCost = paintNeeded * paintCostPerLiter;

    cout << "\nTo paint the walls of the room naturally: " << paintNeeded << " liters of paint\n";
    cout << "Total paint cost: " << totalPaintCost << " hryvnia\n";

    cout << "8 TASK\n";
    cout << "---------------------------------------------------------\n";
    //Вести пятизначное число и сдвинуть его циклически вправо на два разряда
    //например если число 12345 вывести на экран 45123

    int number;
    int lastTwoDigits;
    int firstThreeDigits;

    cout << "Enter a five-digit number: ";
    cin >> number;

    lastTwoDigits = number % 100;
    firstThreeDigits = number / 100;


    cout << "Shifted number: " << lastTwoDigits << firstThreeDigits << "\n";

    cout << "9 TASK\n";
    cout << "---------------------------------------------------------\n";
    //Рассчитать общую массу всех планет солнечной системы.
    //Вычислить среднее арифметическая масс планет.
    //Затем - массу каждой планеты в процентном соотношении, если принять за 100% общую массу всех планет.
    //Во сколько раз масса самой крупной планеты больше чем сама масс всех остальных планет?

    double mercuryMass = 0.330;
    double venusMass = 4.87;
    double earthMass = 5.97;
    double marsMass = 0.642;
    double jupiterMass = 1898;
    double saturnMass = 568;
    double uranusMass = 86.8;
    double neptuneMass = 102;

    double mercuryPercentage;
    double venusPercentage;
    double earthPercentage;
    double marsPercentage;
    double jupiterPercentage;
    double saturnPercentage;
    double uranusPercentage;
    double neptunePercentage;

    double totalMass;
    double averageMass;
    double sumOfOtherMasses;
    double differences;


    // Рассчитываем общую массу всех планет
    totalMass = mercuryMass + venusMass + earthMass + marsMass + jupiterMass + saturnMass + uranusMass + neptuneMass;

    // Рассчитываем среднюю арифметическую массу планет
    averageMass = totalMass / 8;

    // Рассчитываем массу каждой планеты в процентном соотношении от общей массы
    mercuryPercentage = (mercuryMass / totalMass) * 100;
    venusPercentage = (venusMass / totalMass) * 100;
    earthPercentage = (earthMass / totalMass) * 100;
    marsPercentage = (marsMass / totalMass) * 100;
    jupiterPercentage = (jupiterMass / totalMass) * 100;
    saturnPercentage = (saturnMass / totalMass) * 100;
    uranusPercentage = (uranusMass / totalMass) * 100;
    neptunePercentage = (neptuneMass / totalMass) * 100;

    // Рассчитываем во сколько раз масса самой крупной планеты больше суммы масс остальных планет
    sumOfOtherMasses = totalMass - jupiterMass;
    differences = jupiterMass / sumOfOtherMasses;

    cout << fixed << setprecision(2);

    cout << "Total mass of all planets: " << totalMass << "\n";
    cout << "Average mass of planets: " << averageMass << "\n";
    cout << "Mercury mass in percentage: " << mercuryPercentage << "%\n";
    cout << "Venus mass in percentage: " << venusPercentage << "%\n";
    cout << "Earth mass in percentage: " << earthPercentage << "%\n";
    cout << "Mars mass in percentage: " << marsPercentage << "%\n";
    cout << "Jupiter mass in percentage: " << jupiterPercentage << "%\n";
    cout << "Saturn mass in percentage: " << saturnPercentage << "%\n";
    cout << "Uranus mass in percentage: " << uranusPercentage << "%\n";
    cout << "Neptune mass in percentage: " << neptunePercentage << "%\n";
    cout << "Jupiter mass compared to sum of other planet masses: " << differences << " times\n";

    return 0;
}
