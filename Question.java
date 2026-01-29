import javax.swing.JOptionPane;

public abstract class Question {
    static int nQuestion = 0;
    static int nCorrect = 0;

    abstract String ask();

    String question;
    String correctAnswer;

    void check() {
        nQuestion++;
	String answer = ask(); // Will use the method defined in the subclasses
        if (answer.equals(correctAnswer)) {
	    JOptionPane.showMessageDialog(null, "Correct Answer! ");
	    nCorrect++;
        } else {
	    JOptionPane.showMessageDialog(null, "Incorrect. The correct answer is " + "A");
	}
    }

    static void showResults() {
        JOptionPane.showMessageDialog(null, nCorrect + " Correct out of " + nQuestion + " questions");
    }
}
