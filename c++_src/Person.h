#pragma once
#include <string>
#include <unordered_map>
#include <ctime>
using namespace std;
class Person
{
	private:
		// attributes
		string name;
		int age;
		int mood;
		int daily_goal;
	public:
		Person(string name, int age, int mood, int daily_goal);
		
		void personality_generator();
		string getName();
		int getAge();
		int getMood();
		int getDailyGoal();
		void setName(string name);
		void setAge(int age);
		void setMood(int mood);
		void setDailyGoal(int daily_goal);
		//dpo
		unordered_map<int, string> daily_mood_options = {
			{ 1, "Sad" },
			{ 2, "Happy" },
			{ 3, "Cold" },
			{ 4, "Affectionate" },
			{ 5, "Annoyed" },
			{ 6, "Angry" },
			{ 7, "Reliant" },
			{ 8, "Nervous" },
			{ 9, "Embarrased" }
		};
		unordered_map<int, string> daily_goal_options = {
			{ 1, "Practice" },
			{ 2, "Impress" },
			{ 3, "Explore" },
			{ 4, "Relax" },
			{ 5, "Socialize" }
		};
};

