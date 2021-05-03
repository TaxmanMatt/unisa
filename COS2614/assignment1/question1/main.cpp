#include <QtWidgets>

int main (int argc, char* argv[])
{
    QApplication app(argc, argv);

    double output;

    do {
        double celciusInput, fahrenheit;

        //Request temp from user through QInputDialog.
        celciusInput = QInputDialog::getDouble(0, "Temp Converter",
            "Enter temperature in celsius:", 0);

        //Convert from °C to °F using the given formula.
        fahrenheit = ((9 * celciusInput) / 5) + 32;

        //Concatenate the °C and °F arguments into a string.
        QString response = QString("The converted temperature of %1°C is %2°F.\n%3")
            .arg(celciusInput).arg(fahrenheit).arg("Convert another temperature?");

        //Output converted temp through QMessageBox.
        output = QMessageBox::question(0, "Temp Converter", response,
            QMessageBox::Yes | QMessageBox::No);
    } while (output == QMessageBox::Yes);
    return EXIT_SUCCESS;
}

