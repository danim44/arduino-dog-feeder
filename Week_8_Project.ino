void setup() {
    pinMode(9, OUTPUT); // Set pin 9 as an output
    pinMode(7, INPUT); // Set pin 7 as an input
    pinMode(10, OUTPUT); // Set pin 10 as an output
    pinMode(6, INPUT); // Set pin 6 as an input
}

void loop() {
    if(digitalRead(7) == HIGH) { // if button is pushed
        digitalWrite(9, HIGH); // Turn LED on
    }else {
        digitalWrite(9,LOW); // Turn LED off
    }

    if(digitalRead(6) == HIGH) { // if button is pushed
        digitalWrite(10, HIGH); // Turn LED on
    }else {
        digitalWrite(10, LOW); // Turn LED off
    }
}