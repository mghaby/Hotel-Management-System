public interface Calculator{
    int add(int... numbers);
    double add(double... numbers);
    int sub(int... numbers);
    double sub(double... numbers);
    int mul(int... numbers);
    double mul(double... numbers);
    int div(int... numbers);
    double div(double... numbers);
    double percent(double number);
    double sqrt(double number);
    double pow(double number, double power);

}
