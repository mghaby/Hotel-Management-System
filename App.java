import javax.swing.*;
import java.awt.*;
public class App {

    private JFrame f;
    private JPanel p;
    private JButton plus;
    private JButton minus;
    private JButton times;
    private JButton divide;
    private JButton equals;
    private JButton clear;
    private JButton one;
    private JButton two;
    private JButton three;
    private JButton four;
    private JButton five;
    private JButton six;
    private JButton seven;
    private JButton eight;
    private JButton nine;
    private JButton zero;
    private JTextField t;
    private JButton dot;
    private JButton pcent;
    private JButton sqrt;
    private JButton sqr;
    private JButton leftBracket;
    private JButton rightBracket;

    public App() {
        f = new JFrame("Calculator");
        p = new JPanel();
        plus = new JButton("+");
        minus = new JButton("-");
        times = new JButton("*");
        divide = new JButton("/");
        equals = new JButton("=");
        clear = new JButton("C");
        one = new JButton("1");
        two = new JButton("2");
        three = new JButton("3");
        four = new JButton("4");
        five = new JButton("5");
        six = new JButton("6");
        seven = new JButton("7");
        eight = new JButton("8");
        nine = new JButton("9");
        zero = new JButton("0");
        t = new JTextField(20);
        dot = new JButton(".");
        pcent = new JButton("%");
        sqrt = new JButton("sqrt");
        sqr = new JButton("sqr");
        leftBracket = new JButton("(");
        rightBracket = new JButton(")");


        p.add(plus);
        p.add(minus);
        p.add(times);
        p.add(divide);
        p.add(equals);
        p.add(clear);
        p.add(one);
        p.add(two);
        p.add(three);
        p.add(four);
        p.add(five);
        p.add(six);
        p.add(seven);
        p.add(eight);
        p.add(nine);
        p.add(zero);
        p.add(t);
        p.add(dot);
        p.add(pcent);
        p.add(sqrt);
        p.add(sqr);
        p.add(leftBracket);
        p.add(rightBracket);
        
        f.add(p);
        f.setSize(700, 500);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) throws Exception {

        BasicCalculator basicCalculator = new BasicCalculator();
       
        App app = new App();

        Thread.sleep(500);


    }


}

// make a calculator interface that implements into basic calculator
// make the calculator interface have all of the basic methods (add, subtract, multiply, divide, square root, square, brackets, clear and decimal point and percetage calcualtor)
// make scientific calculator extend this class or others as best fit
// make a programming mode as well



// figure out how to send stuff to the C file

// make a method that takes a dynamic number of arguments and adds them all together
// make a method that takes a dynamic number of arguments and subtracts them all together