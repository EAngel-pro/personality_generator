

#include <iostream>
#include "Person.h"

Person Jill("Jill",18,0,0);
string input;

int main() {
	do {
		Jill.personality_generator();
		cout << Jill.getName() << ", " << Jill.getAge() << ", " << Jill.daily_mood_options.at(Jill.getMood()) << ", " << Jill.daily_goal_options.at(Jill.getDailyGoal()) << endl;
		cin >> input;
		if (input=="+1")
		{
			Jill.setAge(Jill.getAge() + 1);
			input = "";
		}
	} while (input != "exit");
	return 0;
}