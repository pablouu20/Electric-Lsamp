// Definición de pines
const int pirPin = 2;  // Pin del sensor PIR
const int ledPin = 13; // Pin de la lámpara LED

void setup() {
  pinMode(pirPin, INPUT);  // Configurar el pin del sensor PIR como entrada
  pinMode(ledPin, OUTPUT); // Configurar el pin de la lámpara LED como salida
  Serial.begin(9600);      // Iniciar la comunicación serial para la depuración
}

void loop() {
  int pirValue = digitalRead(pirPin); // Leer el valor del sensor PIR

  if (pirValue == HIGH) {
    // Si se detecta movimiento, encender la lámpara LED
    digitalWrite(ledPin, HIGH);
    Serial.println("Movimiento detectado");
  } else {
    // Si no hay movimiento, apagar la lámpara LED
    digitalWrite(ledPin, LOW);
    Serial.println("Sin movimiento");
  }

  delay(500); // Añadir un pequeño retardo para estabilizar las lecturas del sensor
}
