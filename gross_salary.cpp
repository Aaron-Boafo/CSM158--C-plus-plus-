#include<iostream>
#include<string>
using namespace std;

// Declaring all my variables
int number_workers;
string employee;
int number_children;
float child_insurance;
float payout;
int hours;
float total;
float employee_salary;



float child_insurances(int num){
    if(num>3){
        payout=(num-3)*0.5;
    }else{
        payout =0;
    }
    
    return payout;
}


float income_tax(float gross){
    payout=gross*0.15;
    return payout;
}


float national_health(float gross){
    payout =gross*0.025;
    return payout;
}


float district_tax(float gross){
    payout=gross*0.01;
    return payout;
}


float salary(int num){
    if (num>40){
        payout=(40*5)+((num-40)*2.5);
    }else{
        payout=num*5;
    }
    
    total=payout- child_insurance - income_tax(payout)-national_health(payout)-district_tax(payout);
    
    return total;
}

int main()
{
    cout << "Input the number of workers: " ;
    cin >> number_workers;
    
    // loop to work out for all the employees
    for(int n=1;n<=number_workers;n++){
        //the employee's name
        cout << "" << endl;
        cout << "input the name of the employee: " ;
        cin >> employee;
        
      // part for the child's insurance
        cout << "input number of children of employee: " ;
        cin >> number_children;
        child_insurance= child_insurances(number_children);
      
      //all necessary bills
      cout << "input the number of hours: " ;
      cin >> hours;
      
      //the total salary
      employee_salary= salary(hours);
      
      //output statement after calculation 
      cout << employee <<" has a total salary of "<<employee_salary<<" cedis"<< endl;
    }
}
