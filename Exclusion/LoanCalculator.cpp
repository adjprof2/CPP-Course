#include <iostream>
#include <string>

using namespace std;

/*
 start
	declare
		num loan_amount	// principle deduction
		num monthly_pay
		num annual_interest_rate
		num interest_payment
		num month_schedule
	// loop (termination condition)
	input loan_amount
	input monthly_pay
	input annual_interest_rate
	month_schedule=1
	while(loan_amount>0)
		interest_payment=loan_amount*(annual_interest_rate/12)
		if (loan_amount+interest_payment) > monthly_pay
			principle=monthly_pay-interest_payment
			loan_amount=loan_payment-principle
		else
			principal=loan_amount
			loan_amount=0
		endif
		print month_schedule, interest_payment, principal, loan_amount
		month_schedule=month_schedule+1
	endwhile
end
 */
void loanCalculator(){

	double loan_amount;
	double monthly_pay;
	double annual_interest_rate;
	double interest_payment;
	double principal;
	int month_schedule = 1;

	cout << "Enter the loan amount: ";
	cin >> loan_amount;
	cout << "Enter the monthly payment: ";
	cin >> monthly_pay;
	cout << "Enter the annual interest rate: ";
	cin >> annual_interest_rate;

	while (loan_amount > 0) {
		interest_payment = loan_amount * (annual_interest_rate / 12);
		if ((loan_amount + interest_payment) > monthly_pay) {
			principal = monthly_pay - interest_payment;
			loan_amount = loan_amount - principal;
		} else {
			principal = loan_amount;
			loan_amount = 0;
		}
		cout << "Month: " << month_schedule << " Interest Payment: "
				<< interest_payment << " Principal: " << principal
				<< " Loan Amount: " << loan_amount << endl;
		month_schedule++;
	}

}
