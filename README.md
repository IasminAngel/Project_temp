# Project_temp
Projeto arquitetado no arduino para captar temperatura.

- Descrição
Este é um código simples em C++ para uso com uma placa Arduino que mede a temperatura usando um sensor de temperatura conectado ao pino analógico A0. Com base na leitura da temperatura, o código aciona um buzzer piezoelétrico conectado ao pino digital 3.

- Funcionalidade
Mede a temperatura: O valor da temperatura é lido a partir do sensor conectado ao pino analógico A0.
Aciona um buzzer: Se o valor da temperatura exceder um limite predefinido (200), o buzzer é acionado; caso contrário, o buzzer permanece desligado.
Saída Serial: O valor da leitura da temperatura é enviado ao monitor serial para monitoramento em tempo real.

- Hardware Necessário

Placa Arduino: Qualquer modelo que suporte leitura analógica e controle digital.
Sensor de Temperatura: Conectado ao pino A0.
Buzzer Piezoelétrico: Conectado ao pino digital 3.

- Conexões
Sensor de Temperatura:
VCC → 5V (ou 3.3V dependendo do sensor)
GND → GND
Saída Analógica → A0
Buzzer Piezoelétrico:
Pino positivo (geralmente vermelho) → Pino digital 3
Pino negativo (geralmente preto) → GND

- Variáveis:
int piezo = 3;: Define o pino digital ao qual o buzzer está conectado.
int temp = A0;: Define o pino analógico ao qual o sensor de temperatura está conectado.
int valorTemp = 0;: Variável para armazenar a leitura da temperatura.

- Função setup():
Configura o pino do buzzer como saída (OUTPUT).
Inicializa a comunicação serial a 9600 bps para monitoramento.

- Função loop():
Lê o valor do sensor de temperatura.
Envia o valor lido para o monitor serial.
Se o valor lido exceder 200, o buzzer é acionado (HIGH); caso contrário, é desligado (LOW).
Aguarda 100 milissegundos antes de repetir o loop.
