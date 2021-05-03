#include <QtWidgets>

int main (int argc, char* argv[])
{
    QApplication app(argc, argv);

    double output;

    do {
        double celciusInput, fahrenheit;

        celciusInput = QInputDialog::getDouble(0, "Temperature Converter",
            "Enter temperature in celsius:", 0);

        fahrenheit = ((9 * celciusInput) / 5) + 32;

        QString response = QString("The converted temperature of %1°C is %2°F.\n%3")
            .arg(celciusInput).arg(fahrenheit).arg("Convert another temperature?");

        output = QMessageBox::question(0, "Temperature Converter", response,
            QMessageBox::Yes | QMessageBox::No);
    } while (output == QMessageBox::Yes);
    return EXIT_SUCCESS;
}

