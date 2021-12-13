import java.lang.Math;

public class BasicCalculator implements Calculator {

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

}
