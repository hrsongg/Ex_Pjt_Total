
입출력 장치 제어
- 조도센서, 가변저항과 LED 장치 제어하기
| no | 장치 | 요구사항 |
| --- | --- | --- |
| 1 | SW1 | SW1 떼면 Blue LED Off, SW1 누르면 Blue LED 주기 변화 시작 |
| 2 | Blue LED | Duty를 25,000을 기준으로 0~50,000 사이에서 Sine 형태로 3s 주기로 변화 |
| 3 | 조도센서, Red LED | 조도 센서를 손가락으로 가리면 LED On\n조도 센서를 노출 시키면 LED Off |  
| 4 | 가변저항, RGB LED | 가변저항 Analog 0~1300 까지는 Red LED On 가변저항 Analog 1300~2600 까지는 Green LED On 가변저항 Analog 2600~4095 까지는 Blue LED On SW2 눌렀다 떼면, RGB 모두 Off | 


---
### Hardware
- ShieldBuddy TC275

### Software
- Aurix Development Studio(IDE)
- Matlab 
