# LocalTimeLib for Arduino

タイムゾーン設定に従った時刻情報を生成します．

## How to use

inoファイルのグローバルスコープにタイムゾーンを定義します．
```
TimeZone localtimezone = {  9*60*60, 0, "+09:00" };
// { Offset from UTC, SummerTime, ISO String }
```
サマータイムは非対応ですが，データとしては確保してあります．
ISO StringにはISO8601に従って表記を行う場合のタイムゾーン文字列を定義してください．

## License
MIT License

## Copyright
Makoto Uju
