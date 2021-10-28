# Лабораторна робота №3

### Можливі ключі
    --help, -h => довідка
    --version, -v => виводить версію
    --years, -y => виводить кількість років

### Приклади
    $ ./output --help -h --help
    Help function
---
    $ ./output -v --version=1.0.1
    Version: 1.0
    
    $ ./output --version=1.0.1 -v1 -v
    Version: 1.0.1
---
    $ ./output --run -y19 --years=15
    ./output: unrecognized option '--run'
    Unknown option
    U are 19 years old
---
    $ ./output -h --help --help --years=91 -v2.0 -y19 --version=1.3.3 --unknownoperator
    Help function
    U are 91 years old
    Version: 2.0
    ./output: unrecognized option '--unknownoperator'
    Unknown option

