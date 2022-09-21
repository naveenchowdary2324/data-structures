class sport
{
	void getName()
	{
		System.out.println("Cricket");
	}
	void teamMember()
	{
		System.out.println("There r 11 players from each side");
	}
}
class soccer extends sport
{
	void getName()
	{
		System.out.println("Soccer");
	}
	void teamMember()
	{
		System.out.println("There r 07 players from each side");
	}	
}
class inhert
{
	public static void main(String args [])
	{
		System.out.println("BEFORE Overridding");
		sport s = new sport();
		s.getName();
		s.teamMember();
		System.out.println("AFTER Overridding");
		soccer sc= new soccer();
		sc.getName();
		sc.teamMember();
	}
}
