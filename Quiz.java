public class Quiz {
    public static void main(String[] args) {
	String headQuestion0 = "The first Letter for the alphabet is:\n";
	headQuestion0 += "\n";

	headQuestion0 += "E";
	headQuestion0 += "\n";


	headQuestion0 += "D";
	headQuestion0 += "\n";

	headQuestion0 += "C";
	headQuestion0 += "\n";

	headQuestion0 += "B";
	headQuestion0 += "\n";

	headQuestion0 += "A";
	headQuestion0 += "\n";
	
	Question question = new MultipleChoiceQuestion(headQuestion0, "D", "B", "C", "A", "E", "d");

	question.check();
	question.showResults();
    }	    

}
