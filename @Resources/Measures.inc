[MeasureWeather]
Measure=WebParser
Url="http://wxdata.weather.com/wxdata/weather/local/#LocationCode#?cc=*&unit=#Unit#&dayf=1"
RegExp="(?siU).*<cc>.*<tmp>(.*)</tmp>.*<t>(.*)</t>.*</cc>.*.*"
UpdateRate=3600
StringIndex=2

[MeasureTemp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url="http://wxdata.weather.com/wxdata/weather/local/#LocationCode#?cc=*&unit=#Unit#&dayf=1"
RegExp="(?siU).*<cc>.*<tmp>(.*)</tmp>.*<t>(.*)</t>.*</cc>.*.*"
UpdateRate=3600
StringIndex=1
