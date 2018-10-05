//============================================================================
// Name        : assignment2.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
double sum();
double factorial(int a);
double Fibonacci(int a);
void Print_Fibonacci(int a);
void print_lcm(int num1,int num2);
double gcd(int num1,int num2);
float round(float num);
int reverse(int number);
bool is_palindrome(int number);
bool is_prime( unsigned int n );
void print_prime(unsigned int num1,unsigned int num2);
int friendliness(int test_number);


int main() {
	std::cout<<sum()<<std::endl<<factorial(5)<<std::endl;
	Print_Fibonacci(12);
	std::cout<<std::endl;
	print_lcm(5,6);
	std::cout<<round(7.2321)<<std::endl;
    std::cout<<reverse(123456789)<<std::endl;
    print_prime(1,100);
    std::cout<<std::endl<<friendliness(9);
	return 0;
}

double sum(){
	double sum = 0;
	for(int k=1;k <= 150150;++k){
		sum = sum + k;
	}
	return sum;
}
double factorial(int a){
	double factorial = 1;
	for(int k = 1; k <= a; ++k){
		factorial = factorial * k;
	}
	return factorial;
}

double Fibonacci(int a){
	if(a == 1 || a == 2){
		return 1;
	}
	else{
		return Fibonacci(a-1) + Fibonacci(a-2);
	}
}

void Print_Fibonacci(int a){
	for(int i = 1; i <= a; ++i ){
	std::cout<<Fibonacci(i)<<" ";
	}
}

int friendliness(int test_number){
	int count_friend{0};
	int starting_number{1};
	while(starting_number*2 <= test_number){
		int add_loop_counter{starting_number};
		int sum = 0;

		while(sum < test_number){
		sum = sum + add_loop_counter;
		add_loop_counter++;
		}
		if( sum == test_number){
				count_friend++;
			}
		starting_number++;
	}

	return count_friend;
}


void print_lcm(int num1,int num2){
	std::cout<< num1/gcd(num1,num2)*num2<<std::endl;
}

double gcd(int num1,int num2){
	int t = 0;
	if(num1 < num2){
		t = num1;
		num1 = num2;
		num2 = t;
	}
	if(num2 == 0){
		return num1;
	}
	return gcd(num2,num1 % num2);

}

float round(float num){
	float round_number{0.0};
	float decimal_number{0.0};
	while(round_number < num){
		round_number++;
	}
	decimal_number = num - round_number + 1 ;

	if(decimal_number < 0.5){
		return round_number-1;
	}
	return round_number;

}


int reverse(int number){
         int reverse_number{0};
         while(number > 0){
        	reverse_number = 10*reverse_number + number % 10;
        	 number = number / 10.0;
         }
         return reverse_number;
}



bool is_palindrome(int number){
    int reverse_number = reverse(number);
	if(number == reverse_number){
		return true;
	}
	return false;
}


bool is_prime( unsigned int n ) {
	    for ( unsigned int k{2}; k < n; ++k ) {
	        if ( (n % k) == 0 ) {
	            return false;
	        }
	    }
	    return true;
	}

void print_prime(unsigned int num1,unsigned int num2){

	for(unsigned int k{num1}; k < num2; ++k){
		if(is_prime(k)){
			std::cout<<k<<",";
		}
	}
}



















