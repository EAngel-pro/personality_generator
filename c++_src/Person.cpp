#include "Person.h"

Person::Person(string name, int age, int mood, int daily_goal)
{
	setName(name);
	setAge(age);
	setMood(mood);
	setDailyGoal(daily_goal);
}


void Person::personality_generator() {
	//seed
	srand(time(0));
	//function
	int random_mo = rand() % (daily_mood_options.size() - 0) + 1;
	int random_go = rand() % (daily_goal_options.size() - 0) + 1;
	this->mood = random_mo;
	this->daily_goal = random_go;
}
//getters
string Person::getName()
{
	return name;
}
int Person::getAge()
{
	return age;
}
int Person::getMood()
{
	return mood;
}
int Person::getDailyGoal()
{
	return daily_goal;
}
//setters
void Person::setName(string name)
{
	this->name = name;
}
void Person::setAge(int age)
{
	this->age = age;
}
void Person::setMood(int mood)
{
	this->mood = mood;
}
void Person::setDailyGoal(int daily_goal)
{
	this->daily_goal = daily_goal;
}