# Challenge-Edge
<h2>Vídeo de Explicação do Projeto</h2>
<a href="">Video</a>

<h1>Projeto de Verificação de Temperatura do Carro ao passar por Sensor de Proximidade</h1>

<p>Este projeto utiliza um ESP32 para monitorar a temperatura de um carro ao passar por um sensor de proximidade. As informações de temperatura são exibidas em um display LCD, permitindo um feedback visual rápido e eficiente.</p>

<h2>Componentes Utilizados</h2>
<ul>
  <li><strong>ESP32</strong>: Microcontrolador com conectividade Wi-Fi e Bluetooth.</li>
  <li><strong>Sensor de Proximidade</strong>: Detecta a presença do carro.</li>
  <li><strong>Sensor de Temperatura</strong>: Mede a temperatura do ambiente ou do carro (pode ser um DHT11, LM35, etc.).</li>
  <li><strong>Display LCD</strong>: Exibe a temperatura lida e mensagens de status.</li>
</ul>

<h2>Funcionamento do Projeto</h2>
<ol>
  <li><strong>Detecção de Proximidade</strong>: O sensor de proximidade é acionado quando o carro se aproxima. Isso inicia o processo de leitura da temperatura.</li>
  <li><strong>Leitura da Temperatura</strong>: Assim que o sensor de proximidade é ativado, o ESP32 lê a temperatura usando o sensor de temperatura conectado.</li>
  <li><strong>Exibição no LCD</strong>: A temperatura lida é exibida em um display LCD. Isso fornece uma visualização clara da temperatura do carro em tempo real.</li>
</ol>

<h2>Conexões dos Componentes</h2>
<p>As conexões dos componentes são feitas da seguinte forma:</p>
<ul>
  <li><strong>ESP32</strong>: O microcontrolador que gerencia os sensores e o display.</li>
  <li><strong>Sensor de Proximidade</strong>: Conectado a um dos pinos digitais do ESP32 (por exemplo, GPIO 12).</li>
  <li><strong>Sensor de Temperatura</strong>: Conectado a um pino digital do ESP32 (por exemplo, GPIO 4).</li>
  <li><strong>Display LCD</strong>: Conectado ao barramento I2C do ESP32, usando os pinos SDA e SCL (por exemplo, GPIO 21 para SDA e GPIO 22 para SCL).</li>
</ul>

<h2>Conclusão</h2>
<p>Este projeto fornece uma maneira eficiente de monitorar a temperatura de um carro ao passar por um sensor de proximidade. O uso do ESP32 permite uma integração fácil de vários sensores e módulos, proporcionando uma experiência prática e educativa.</p>

<h2>INTEGRANTES</h2>
<ul>
    <li><strong>Maurício Alves</strong> RM: 556214</li>
    <li><strong>Carlos Henrique</strong> RM: 558003</li>
    <li><strong>Rodrigo Hiroshi</strong> RM: 557374</li>
</ul>
