# SQL 코드 정리
## 기본 (칼럼의 데이터 타입)
### 문자형
------
#### CHAR(n)
    - 고정 길이 문자형. 
    - (n)의 n은 저장될 문자 값의 길이를 뜻함.
    - Ex : Name CHAR(10)라고 정의 -> Name 칼럼에는 최대 10개의 문자 입력 가능.
    - IF : CHAR(10)이라고 선언하고 'abcd'라는 4개의 문자만 입력해도 나머지는 공백으로 채워짐
    - IF2 : 즉 'abcd    '처럼 'abcd' 4개의 문자와 6개의 공백으로 저장됨.
    - 'n'의 최대값은 255이므로 최대 255개의 문자를 저장할 수 있음.

#### VARCHAR(n)
    - 가변 길이 문자형.
    - 실제 입력되는 문자의 길이만큼 저장됨.
    - Ex : VARCHAR(10)이라고 선언하고 'abcd'를 입력하면 공백 없이 'abcd' 4개의 문자가 저장됨.
    - 'n'의 최대값은 65.533(64KB)임.
    - CHAR보다 많은 값을 저장할 수 있어서 CHAR보다는 VARCHAR 타입을 주로 사용함.
    
#### TEXT
    - VARCHAR보다 더 큰 문자 값을 저장할 때 사용됨
    - 저장할 수 있는 최대 크기에 따라 TINYTEXT, TEXT, MEDIUMTEXT, LONGTEXT로 나뉨
    
    - TINYTEXT    : 255Byte(255개 문자)
    - TEXT        : 65KB(65,535개 문자)
    - MEDIUMTEXT  : 16MB(16,777,215개 문자)
    - LONGTEXT    : 4GB(4,294,967,295개 문자)

#### BLOB
#### ENUM


### 숫자형
-------

#### TINYINT[(M)] [UNSIGNED] [ZEROFILL]
#### SMALLINT[(M)] [UNSIGNED] [ZEROFILL]
#### MEDIUMINT[(M)] [UNSIGNED] [ZEROFILL]
#### INT[(M)] [UNSIGNED] [ZEROFILL]
#### BIGINT[(M)] [UNSIGNED] [ZEROFILL]
#### DECIMAL[(M,D)] [UNSIGNED] [ZEROFILL]
#### DOUBLE[(M,D)] [UNSIGNED] [ZEROFILL]


### 날짜형
------
#### DATE
#### DATETIME[(fsp)]
#### TIME[(fsp)]
#### YEAR