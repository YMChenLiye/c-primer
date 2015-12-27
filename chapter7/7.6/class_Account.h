#ifndef class_Account_h
#define class_Account_h

class Account
{
public:
	void calcalate() { amount += amount * interestRate;}
	static double rate() { return interestRate;}
	static void rate(double r) {interestRate=r;}

private:
	std::string owner;
	double amount;
	static double interestRate;
	static constexpr double todayRate=14.1;
	static double initRate() {interestRate=todayRate;}
};

double Account::interestRate=initRate();

#endif
