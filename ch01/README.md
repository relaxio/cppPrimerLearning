# Chapter 1 Getting Started

## Exercise 1.1
- system: `ubantu 16.04.1 LTS`, compiler：`clang 3.8.0`, `gcc 5.4.0`
- use `--version` flag for seeing compiler version

## Exercise 1.2
Linux E.Exit Codes With Special Meanings.[\[1\]](http://www.tldp.org/LDP/abs/html/exitcodes.html)

|Exit Code Number|Meaning|Example|Comments|
|---     |---    |---                      |---     |
|1       |       |`var = 1/0`              |        |
|2       |       |`empty_function(){}`     |        |
|126     |       |`/dev/null`              |        |
|127     |       |illegal_commang          |        |
|128     |       |`exit pi`                |        |
|128+n   |       |`kill -9 $PPID` of script|        |
|130     |       |`Ctrl+C`                 |        |
|255     |       |`exit -1`                |        |


