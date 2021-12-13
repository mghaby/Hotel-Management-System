import java.lang.Math;
import javax.swing.*;
import java.awt.*;

public class BasicCalculator implements Calculator {

    private static final int TEXT_FIELD_WIDTH = 60;
    private JFrame f;
    private JPanel p;
    private JButton plus, minus, times, divide, equals, clear, dot, pcent;
    private JButton one, two, three, four, five, six, seven, eight, nine, zero, leftBracket, rightBracket;
    private JButton sqrt, sqr;
    private JTextField t;

    String numberBuffer;

    public BasicCalculator(){
        f = new JFrame("Calculator");
        p = new JPanel();
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
        sqrt = new JButton("sqrt");
        sqr = new JButton("sqr");
        leftBracket = new JButton("(");
        rightBracket = new JButton(")");

        setBasicButtons();

        f.add(p);
        f.setSize(700, 500);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
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
    public double sqrt(double number) {
        return Math.sqrt(number);
    }

    @Override
    public double pow(double number, double power) {
        return Math.pow(number, power);
    }


    private void setBasicButtons(){
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
    }

}
