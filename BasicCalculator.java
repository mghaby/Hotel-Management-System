import java.lang.Math;
import javax.swing.*;
import java.awt.*;

public class BasicCalculator implements Calculator {

    private static final int TEXT_FIELD_WIDTH = 20;
    private JFrame f;
    private JPanel p;
    private JButton plus, minus, times, divide, equals, clear, dot, pcent;
    private JButton one, two, three, four, five, six, seven, eight, nine, zero, leftBracket, rightBracket;
    private JButton sqrt, sqr;
    private JTextField t;

    String numberBuffer;

    public BasicCalculator(){
        f = new JFrame("Calculator");
        p = new JPanel(new GridBagLayout());
        
        f.add(p);
        f.pack();
        f.setResizable(false);
        f.setSize(350, 400);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        t = new JTextField(TEXT_FIELD_WIDTH);
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
        dot = new JButton(".");
        pcent = new JButton("%");
        sqrt = new JButton("\u221A");
        sqr = new JButton("x²"); 
        leftBracket = new JButton("(");
        rightBracket = new JButton(")");

        GridBagConstraints c = new GridBagConstraints();
        c.insets = new Insets(2,2,2,2);

        c.gridx = 0; c.gridy = 0;
        p.add(t, c);

        c.gridx = 0; c.gridy = 2;
        p.add(seven, c);
        c.gridx = 1; c.gridy = 2;
        p.add(eight, c);
        c.gridx = 2; c.gridy = 2;
        p.add(nine, c);
        c.gridx = 3; c.gridy = 2;
        p.add(divide, c);
        c.gridx = 5; c.gridy = 2;
        p.add(clear, c);

        c.gridx = 0; c.gridy = 3;
        p.add(four, c);
        c.gridx = 1; c.gridy = 3;
        p.add(five, c);
        c.gridx = 2; c.gridy = 3;
        p.add(six, c);
        c.gridx = 3; c.gridy = 3;
        p.add(times, c);
        c.gridx = 4; c.gridy = 3;
        p.add(leftBracket, c);
        c.gridx = 5; c.gridy = 3;
        p.add(rightBracket, c);

        c.gridx = 0; c.gridy = 4;
        p.add(one, c);
        c.gridx = 1; c.gridy = 4;
        p.add(two, c);
        c.gridx = 2; c.gridy = 4;
        p.add(three, c);
        c.gridx = 3; c.gridy = 4;
        p.add(minus, c);
        c.gridx = 4; c.gridy = 4;
        p.add(sqr, c);
        c.gridx = 5; c.gridy = 4;
        p.add(sqrt, c);

        c.gridx = 0; c.gridy = 5;
        p.add(zero, c);
        c.gridx = 1; c.gridy = 5;
        p.add(dot, c);
        c.gridx = 2; c.gridy = 5;
        p.add(pcent, c);
        c.gridx = 3; c.gridy = 5;
        p.add(plus, c);
        c.gridx = 4; c.gridy = 5;
        p.add(equals, c);


        f.setVisible(true);

    }

    @Override
    public int add(int... numbers) {
        int sum = 0;
        for(int i = 0; i < numbers.length; i++) {
           sum += numbers[i];
        }
        return sum;
    }

    @Override
    public double add(double... numbers) {
        double sum = 0.0;
        for(int i = 0; i < numbers.length; i++) {
           sum += numbers[i];
        }
        return sum;
    }

    @Override
    public int sub(int... numbers) {
        int sum = 0;
        for(int i = 0; i < numbers.length; i++) {
           sum -= numbers[i];
        }
        return sum;
    }

    @Override
    public double sub(double... numbers) {
        double sum = 0.0;
        for(int i = 0; i < numbers.length; i++) {
           sum -= numbers[i];
        }
        return sum;
    }

    @Override
    public int mul(int... numbers) {
        int sum = 0;
        for(int i = 0; i < numbers.length; i++) {
           sum *= numbers[i];
        }
        return sum;
    }

    @Override
    public double mul(double... numbers) {
        double sum = 0.0;
        for(int i = 0; i < numbers.length; i++) {
           sum *= numbers[i];
        }
        return sum;
    }

    @Override
    public int div(int... numbers) {
        int sum = 0;
        for(int i = 0; i < numbers.length; i++) {
           sum /= numbers[i];
        }
        return sum;
    }

    @Override
    public double div(double... numbers) {
        double sum = 0.0;
        for(int i = 0; i < numbers.length; i++) {
           sum /= numbers[i];
        }
        return sum;
    }

    @Override
    public double percent(double number) {
        return number / 100;
    }

    @Override
    public double root(double number) {
        return Math.sqrt(number);
    }

    @Override
    public double square(double number) {
        return Math.pow(number, 2);
    }
    
}
