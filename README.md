# Switch Science Arduino Boards

このリポジトリには、以下のSwitch ScienceのArduino互換開発ボードのサポートファイルが含まれています。

### AVR Boards
* 3914 Switch Science Pro Micro

### nRF52 Boards
* 6100 Switch Science ISP1807 Breakout
* 6250 Switch Science BLE-SS dev board Multi Sensor
* 6490 Switch Science ISP1507 Breakout
* 6761 Raytac MDBT50Q-RX Dongle (Bootloader available)
* 6939 Switch Science ISP1807 Micro Board

### インストール

Arduino IDEを起動し`ファイル > 環境設定 > 追加のボードマネージャURL:`に次のURLを追記してください。
```
https://raw.githubusercontent.com/SWITCHSCIENCE/Arduino_Board_Package/master/package_Switch_Science_index.json
```
`nRF52 Boards`は`Adafruit`のサポートファイルを参照する為、下記URLも`追加のボードマネージャURL`に追記してください。
```
https://www.adafruit.com/package_adafruit_index.json
```
