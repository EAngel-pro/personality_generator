package personality_generator_java;

public class Main {

	public static void main(String[] args) {
		Person Jill = new Person("Jill",18,null,null);
		Jill.personality_generator();
		System.out.println(Jill.getName() + "," + Jill.getAge() + "," + Jill.getMood() + "," + Jill.getDailyGoal());
		//System.in.read();
	}

}
