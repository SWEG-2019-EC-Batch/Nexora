
Task 1
student course total
1.problem analsis

1.1 input 1.assignment mark(out of 100) 2.midterm mark(out of 100) 3.final examination mark(out of 100) 1.2 output 1.total course mark 2.student result(pass or fail)
2.process (operation)
1.start the program 2.declare the variables to store assignment,midterm,final marks and the total course mark 3.declare constants for assignment weight(20%),midterm weight(30%),final weight(50%) and pass mark(50) 4.read the assignment,midterm,and final mark. 5.calculate the weighted assignment mark,weighted midtermark ,weighted final mark,and total course mark by adding those three weighted marks. 6.determine whether the student passes or fail using the conditional operator .if the total is greater or equalsto 50 ,display pass;otherwise dispalay fail. 7.display the total cousre mark to one decimal place and the result. 8.stop the program.

quantity and formula

quantity               ### formula
w.assignment    | assignment0.2 w.midtem        | midterm0.3 w.final         | final*0.5 total course    | assignment + midterm + final student result  |total>=50?pass:fail

The flowchart  for task 1

Flowchart TD A([START]) --> B[/READ Assignment, Midterm and Final Marks/] B --> C[Calculate Total:
Assignment * 0.20 + Midterm *0.30 + Final * 0.50] C --> D{Is Total >= 50?} D -- Yes --> E[Result = Pass] D -- No --> F[Result = Fail] E --> G[/PRINT Total and Result/] F --> G G --> H([END])   //([START]) == Oval for Start/End [/Input/] == Parallelogram for Input/Output [Process] == Rectangle for calculations {Decision?}  Diamond== for Yes/No decision//


Task 2
electricity bill
Problem Analysis
2.1 Input
Electricity units consumed in a month (kWh). 2.2 Output 1.Energy charge. 2.Fixed service charge. 3.Total electricity bill.
process
1.Start the program. 2.Declare variables to store electricity units, energy charge and total bill. 2.Declare constants for the first-unit rate (1.50 birr), extra-unit rate (2.00 birr), unit limit (50) and service charge (10 birr). 3.Read the electricity units consumed . 4.Check the number of units using the conditional operator. 5.If the units are less than or equal to 50, calculate the energy charge by multiplying the units by 1.50 birr. 6.If the units are greater than 50, calculate the charge for the first 50 units and add the charge for the remaining units at 2.00 birr each. 7.Calculate the total bill by adding the energy charge and service charge. 8.Display the energy charge, service charge and total bill to two decimal places. 9.Stop the program.
quantity and formula
quantity               ### formula
First 50 units             | charge 501.50 Units above 50             | Units - 50 Energy charge (units <=50) |Units * 1.50 Energy charge (units > 50) |(501.50) + (Units * 50) * 2.00 Service charge             |10 birr Total bill                 | Energy + Service charge

FLOW CHART FOR TASK 2

flowchart TD A([START]) --> B[/READ electricity units/] B --> C{Are units <= 50?} C -->|Yes| D[Energy = Units * 1.50] C -->|No| E[Energy = 50 * 1.50 + (Units - 50) * 2.00] D --> F[Service charge = 10.00] E --> F F --> G[Total bill = Energy + Service charge] G --> H[/Display energy charge, service charge and total bill/] H --> I([END])

Task 3
trip speed and fuel cost
Problem analysis
3.1 Input 1.Distance (km). 2.Hours. 3.Minutes. 4.Fuel consumption (litres per 100 km). 5.Price per litre (birr). 3.2 Output 1.Average speed (km/h). 2.Fuel used (litres). 3.Fuel cost (birr).
process
1.start the program 2.Declare variables to store total travel time, average speed, fuel used and fuel cost. 3.Read the distance, hours, minutes, fuel consumption rate and price per litre. 3.Convert the travel time into hours by adding the hours to the minutes divided by 60. 4.Calculate average speed by dividing the distance by the total travel time. 5.Calculate the fuel used by multiplying the distance by the fuel consumption rate and dividing the result by 100. 6.Calculate the fuel cost by multiplying the fuel used by the price per litre. 7.Display the average speed, fuel used and fuel cost to two decimal places. 8.end the program.
quantity and formula
quantity               ### formula
Total travel time   |  Hours + Minutes / 60 Average speed       | Distance / Time Fuel used           |Distance *Fuel rate / 100 Fuel cost           | Fuel used *Price per litre

flow chart for task 3

flowchart TD A([Start]) --> B["Enter distance, hours, and minutes"] B --> C["Enter fuel consumption and fuel price"] C --> D["Convert travel time to hours"] D --> E["Calculate average speed"] E --> F["Calculate fuel used"] F --> G["Calculate fuel cost"] G --> H["Display average speed, fuel used, and fuel cost"] H --> I([End])