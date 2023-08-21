package personality_generator_java;

import java.util.Random;

public class Person {
	
	private String name;
	private int age;
	private DMO mood;
	private DGO daily_goal;

	public Person(String name, int age, DMO mood, DGO daily_goal) {
	//def __init__(self, name, age, mood, daily_goal):
	this.setName(name);
	this.setAge(age);
	this.setMood(mood);
	this.setDailyGoal(daily_goal);

	//def __str__(self):
	//	return f"{self.name},{self.age},{daily_personality_options.daily_mood_options.get(self.mood)},{daily_personality_options.daily_goal_options.get(self.daily_goal)}"
	//personality_generator() {}
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public DMO getMood() {
		return mood;
	}

	public void setMood(DMO mood) {
		this.mood = mood;
	}

	public DGO getDailyGoal() {
		return daily_goal;
	}

	public void setDailyGoal(DGO daily_goal) {
		this.daily_goal = daily_goal;
	}

	public void personality_generator() {
		this.setMood(DMO.values()[new Random().nextInt(DMO.values().length)]);//this.mood = Random.get(mood); //daily mood roll (usually nothing major)
		this.setDailyGoal(DGO.values()[new Random().nextInt(DGO.values().length)]);//Random.get(list(daily_personality_options.daily_goal_options.keys())); //daily goal generation (can be overridden)
	}
}
