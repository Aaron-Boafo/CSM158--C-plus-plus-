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
float net_pay;



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
    
    return payout;
}

float charges(float payout){
    total= child_insurance+district_tax(payout)+national_health(payout)+income_tax(payout);
    return total;
}

float gross_pay(int num,float num1){
    payout=salary(num);
    total=payout -charges(num1);
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
        
      // part for the child insurances
        cout << "input number of children of employee: " ;
        cin >> number_children;
        child_insurance= child_insurances(number_children);
      
      //all necessary bills
      cout << "input the number of hours: " ;
      cin >> hours;
      
      //the total salary and deductions 
      net_pay= salary(hours);
      float gross_salary= gross_pay(hours,net_pay);
     float charge  = charges(net_pay) ;
      float child_bills = child_insurances(number_children);
      float district_bills= district_tax(net_pay);
      float income_bills = income_tax(net_pay);
      float health_bills= national_health(net_pay);
      cout << "" << endl;
      //output statement after calculation 
      cout << "Name of Employee :\t" << employee <<endl;
      cout << "Income Tax:       \t" <<income_bills<< endl;
      cout << "National Health Levy: \t" <<health_bills<< endl;
      cout << "District Tax:         \t" << district_bills<<endl;
      cout << "Educational Funds: \t" << child_bills<<endl;
      cout << "" << endl;
      cout << "Total Charges:  \t" <<charge<< endl;
      cout << "Net Pay: \t \t" <<net_pay<< endl;
      cout << "Gross Pay:        \t" << gross_salary<<endl;
      
    }
}