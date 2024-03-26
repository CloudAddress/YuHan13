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
    - VARCHAR보다 더 큰 문자 값을 저장할 때 사용됨.
    - 저장할 수 있는 최대 크기에 따라 TINYTEXT, TEXT, MEDIUMTEXT, LONGTEXT로 나뉨.
    
    - TINYTEXT    : 255Byte(255개 문자).
    - TEXT        : 65KB(65,535개 문자).
    - MEDIUMTEXT  : 16MB(16,777,215개 문자).
    - LONGTEXT    : 4GB(4,294,967,295개 문자).

#### BLOB
    - Binary Large Object의 약어
    - 이미지처럼 크기가 큰 데이터를 저장할 때 사용함
    - TINYBLOB   : 255Byte
    - BLOB       : 64KB
    - MEDIUMBLOB : 16MB
    - LONGBLOB   : 4GB

#### ENUM
    - 특정 값의 목록을 정해 놓고 이 목록에 있는 값들만 입력할 수 있는 문자열 객체 타입
    - Ex : ENUM('small', 'medium', 'large')라고 선언한다면 이 칼럼에는 이 3가지 값만 입력할 수 있음

-------
### 숫자형
-------
- 숫자형을 선언할 때 붙일 수 있는 옵션은 [UNSIGNED] 와 [ZEROFILL] 임

- [UNSIGNED]는 부호가 없다는 뜻으로, 0과 0보다 큰 수만 입력 가능함
- [UNSIGNED]를 명시하지 않으면 양수와 음수 모두 입력 가능함

- [ZEROFILL]는 빈자리를 0으로 채워 저장한다는 뜻임
- 선언된 크기에서 입력된 숫자의 자리를 빼고 남은 나머지 자리를 0으로 채움
- [ZEROFILL]를 붙이면 'MySQL'은 자동으로 [UNSIGNED] 옵션을 추가함
- [ZEROFILL]는 곧 없어질 예정임

#### TINYINT[(M)] [UNSIGNED] [ZEROFILL]
    - -128 ~ 127 사이의 정수를 저장할 수 있는 데이터 타입
    - IF : [UNSIGNED]을 붙이면 0 ~ 255까지 저장할 수 있음
    - []로 표시한 부분은 생략이 가능함
    - 'M'에는 저장할 수 있는 크기를 명시
    - 'M'같은 크기를 지정하는 부분은 없어질 수 있음 (명시하지 말고 TINYINT만 사용)

#### SMALLINT[(M)] [UNSIGNED] [ZEROFILL]
    - -32,768 ~ 32,767까지의 정수를 저장할 수 있는 데이터 타입
    - [UNSIGNED]를 붙이면 0 ~ 65,535까지 저장할 수 있음

#### MEDIUMINT[(M)] [UNSIGNED] [ZEROFILL]
    - SMALLINT보다 더 큰 정수를 입력할 때 사용함
    - -8,388,608 ~ 8,388,607까지 저장할 수 있음
    - [UNSIGNED]를 명시하면 0 ~ 16,777,215까지 저장 가능함

#### INT[(M)] [UNSIGNED] [ZEROFILL]
    - -2,147,483,648 ~ 2,147,483,647까지, [UNSIGNED]를 명시하면 0 ~ 4,294,967,295까지 가능함
    - 음수를 포함하면 대략 -21억 ~ 21억까지 임
    - INT 대신 INTEGER이라고 명시해도 됨

#### BIGINT[(M)] [UNSIGNED] [ZEROFILL]
    - 음수를 포함해 21억이 넘는 정수는 BIGINT를 사용하면 됨

#### 실수형    
#### DECIMAL[(M,D)] [UNSIGNED] [ZEROFILL]
    - 고정 소수 실수형
    - 'M'은 전체 자릿수를, D는 소수점 이하 자릿수를 의미
    - 'M'은 소수점 이하 자릿수를 포함해 최대 65자리까지 저장할 수 있음
    - 'M'을 생략하면 기본으로 10이 적용됨
    - 'D'는 최대 30자리까지 지정 가능함
    - 'D'를 명시하지 않거나 0을 명시하면 소수점 이하는 없다는 뜻임
    - DECIMAL 대신 DEC, FIXED, NUMERIC을 써도 되며, 모두 DECIMAL과 같은 데이터 타입임

#### DOUBLE[(M,D)] [UNSIGNED] [ZEROFILL]
    - 부동 소수 실수형
    - 'M'과'D'는 각각 전체 자릿수와 소수점 이하 자릿수를 의미함
    - DOUBLE은 DECIMAL과 달리 근사값을 저장함, 따라서 입력하는 값의 자릿수가 15자리를 넘어가면 부정확한 값이 저장됨
    
------
### 날짜형
------
#### DATE
#### DATETIME[(fsp)]
#### TIME[(fsp)]
#### YEAR