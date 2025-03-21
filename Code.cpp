#include <LiquidCrystal.h>
LiquidCrystallcd(2, 3, 4, 5, 6, 7);
intsw1 = 13;
intsw2 = 12;
intsw3 = 11;
intsw4 = 10;
intsw5 = 9;
inta = 0;
intb = 0;
intc = 0;
#defineled8
voidsetup()
{
    pinMode(sw1, INPUT);
    pinMode(sw2, INPUT);
    pinMode(sw3, INPUT);
    pinMode(sw4, INPUT);
    pinMode(sw5, INPUT);
    pinMode(led, OUTPUT);
    Serial.begin(9600);
    lcd.begin(16, 2);
    lcd.setCursor(4, 0);
    lcd.print("ELECTRONIC");
    lcd.setCursor(0, 1);
    lcd.print("VOTING");
    lcd.setCursor(8, 1);
    lcd.print("MACHINE");
    delay(1500);
    lcd.clear();
    digitalWrite(sw1, HIGH);
    digitalWrite(sw2, HIGH);
    digitalWrite(sw3, HIGH);
    digitalWrite(sw4, HIGH);
    digitalWrite(sw5, HIGH);
    lcd.begin(16, 2)
        lcd.setCursor(0, 0);
    lcd.print("IIUC");
    lcd.setCursor(6, 0);
    lcd.print("NSU");
    lcd.setCursor(12, 0);
    lcd.print("EDU");
    lcd.setCursor(0, 1);
    lcd.print("SW1");
    lcd.setCursor(6, 1);
    lcd.print("SW2");
    lcd.setCursor(12, 1);
    lcd.print("SW3");
    delay(500);
}
voidloop()
{
    if (digitalRead(sw1) == LOW)
    {
        a = a + 1;
        digitalWrite(led, HIGH);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("THANKSFOR");
        lcd.setCursor(5, 1);
        lcd.print("VOTING");
        while (digitalRead(sw4) == HIGH)
            ;
        digitalWrite(led, LOW);
        admin();
    }
    elseif(digitalRead(sw2) == LOW)
    {
        b = b + 1;
        digitalWrite(led, HIGH);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("THANKSFOR");
        lcd.setCursor(5, 1);
        lcd.print("VOTING");
        while (digitalRead(sw4) == HIGH)
            ;
        digitalWrite(led, LOW);
        admin();
    }
    elseif(digitalRead(sw3) == LOW)
    {
        c = c + 1;
        digitalWrite(led, HIGH);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("THANKSFOR");
        lcd.setCursor(5, 1);
        lcd.print("VOTING");
        while (digitalRead(sw4) == HIGH)
            ;
        digitalWrite(led, LOW);
        admin();
    }
    if (digitalRead(sw5) == LOW)
    {
        lcd.begin(16, 2);
        lcd.setCursor(0, 0);
        lcd.print("IIUC");
        lcd.setCursor(6, 0);
        lcd.print("NSU");
        lcd.setCursor(12, 0);
        lcd.print("EDU");
        lcd.setCursor(0, 1);
        lcd.println(a);
        lcd.setCursor(6, 1);
        lcd.println(b);
        lcd.setCursor(12, 1);
        lcd.println(c);
        delay(5000);
        lcd.clear();
        intd = a + b + c;
        if (d)
        {
            if (a > b && a > c)
            {
                lcd.setCursor(0, 0);
                lcd.print("CONGRATS");
                lcd.setCursor(5, 1);
                lcd.print("IIUCWINS");
                delay(5000);
                lcd.clear();
            }
            elseif(b > a && b > c)
            {
                lcd.setCursor(0, 0);
                lcd.print("CONGRATS");
                lcd.setCursor(5, 1);
                lcd.print("NSUWINS");
                delay(5000);
                lcd.clear();
            }
            elseif(c > b && c > a)
            {
                lcd.setCursor(0, 0);
                lcd.print("CONGRATS");
                lcd.setCursor(5, 1);
                lcd.print("EDUWINS");
                delay(5000);
                lcd.clear();
            }
            else
            {
                lcd.setCursor(0, 0);
                lcd.print("NORESULT");
                lcd.setCursor(0, 1);
                lcd.print("ORTIE");
                delay(5000);
                lcd.clear();
            }
        }
        else
        {
            lcd.print("NOVOTE");
            delay(5000);
            lcd.clear();
        }
    }
}
intadmin()
{
    if (digitalRead(sw4) == LOW)
    {
        lcd.begin(16, 2);
        lcd.setCursor(0, 0);
        lcd.print("IIUC");
        lcd.setCursor(6, 0);
        lcd.print("NSU");
        lcd.setCursor(12, 0);
        lcd.print("EDU");
        lcd.setCursor(0, 1);
        lcd.print("SW1");
        lcd.setCursor(6, 1);
        lcd.print("SW2");
        lcd.setCursor(12, 1);
        lcd.print("SW3");
        delay(500);
    }
}
