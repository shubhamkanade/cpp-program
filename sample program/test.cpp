#include<iostream>
#include<string>

int main()
{

	std::string greeting = " Greetings";
	std::string name {"Youtubers"};

	auto lambda = [] (auto num) {return num + num;};
	
	std::cout << "lambada[int] = " << lambda(10) <<std::endl;
	
return 0;
}
