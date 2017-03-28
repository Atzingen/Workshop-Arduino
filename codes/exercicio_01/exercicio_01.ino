/*
    Workshop de Arduino

    Semana da computação 2017
    IFSP Campus Piracicaba

    -----------------------------
    Exercicio 01

    Crie um semaforo que fique:
    6 segundos no verde,
    2 segundos no amarelo,
    8 segundos no vermelho.

    Use a imagem para ajudar a fazer as ligações na placa
*/

// Defina as variaveis para os pinos dos 3 leds

void setup()
{
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);

    // defina o pino dos 3 leds como saida

}

void loop()
{
    // ligue 1 led (verde) e desligue os outros
    // espere o tempo adequado
    // Repita a mesma coisa para o amarelo e vermelho
}
