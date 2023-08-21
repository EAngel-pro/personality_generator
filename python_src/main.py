import daily_personality_options
import random

class Person:
	def __init__(self, name, age, mood, daily_goal):
		self.name = name
		self.age = age
		self.mood = mood
		self.daily_goal = daily_goal

	def __str__(self):
		return f"{self.name},{self.age},{daily_personality_options.daily_mood_options.get(self.mood)},{daily_personality_options.daily_goal_options.get(self.daily_goal)}"
	def personality_generator(self):
		self.mood = random.choice(list(daily_personality_options.daily_mood_options.keys())) #daily mood roll (usually nothing major)
		self.daily_goal = random.choice(list(daily_personality_options.daily_goal_options.keys())) #daily goal generation (can be overridden)

Jill = Person("Jill",18,0,0)
def mainloop():
	Jill.personality_generator()
	print(Jill)
	input()
	mainloop()

mainloop()