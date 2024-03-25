# SQL 코드 정리 
## 기본
### 데이터 정의어
-------
    - 'DDL(Data Definition Language)' : 뭔가를 정의할 떄 사용하는 SQL 문장.
    - CREATE         : 데이터베이스 객체를 생성할 때 사용함.
    - ALTER          : 기존 객체를 수정할 때 사용함.
    - DROP           : 기존 객체를 삭제할 때 사용함.
    - TRUNCATE TABE  : 테이블에 있는 데이터 전체를 삭제할 때 사용함.
    - RENAME TABLE   : 테이블의 이름을 변경할 때 사용함.

### 데이터 조작어
-------
    - 'DML(Data Manipulation Language)' : 데이터를 조작(가공)하는 데 사용하는 언어.
    - SELECT : 테이블에 있는 데이터를 조회할 때 사용함. ( DML 전체에서 가장 많이 사용됨)
    - INSERT : 테이블에 데이터를 새로 넣을 때(입력할 때) 사용함.
    - UPDATE : 테이블에 입력된 데이터를 수정할 때 사용함.
    - DELETE : 테이블에 있는 데이터를 삭제할 때 사용함.

### 트랜잭션 제어어
-------
    - 'TCL(Transaction Control Language)' : 트랜잭션 처리를 수행하는 SQL 문장.
    - COMMIT            : 데이터 조작 작업이 성공하면 모든 데이터 변경사항(입력, 수정, 삭제)을 반영하는 문장임.         
    - ROLLBACK          : 데이터 조작 작업이 실패하거나 작업을 취소하고 싶을 때 사용함.
    - START TRANSACTION : 새로운 트랜잭션이 시작됨을 알리는 문장임.
        - BEGIN         : 위와 같음.
            - START TRANSACTION 또는 BEGIN 문이 실행된 후에 입력된 DML 문장부터 COMMIT 문이나 ROLLBACK 문을 만날 때까지가 하나의 트랜잭션이 됨.
    - SAVEPOINT         : 트랜잭션에 이름을 부여하는 문장임.
        - SAVEPOINT 문을 사용하면 지정된 이름으로 트랜잭션이 시작되고, COMMIT이나 ROLLBACK 문을 만나면 트랜잭션이 종료됨.
    - SET autocommit    : 트랜잭션을 처리하는 문장이 아니라 MySQL에서 자동 커밋(autocommit) 모드를 설정하는 문장임.
        - 자동 커밋이 활성화되면 모든 DML 문장을 실행하고, 별도로 COMMIT 문을 실행하지 않아도 자동으로 데이터의 변경사항이 적용됨. MySQL은 기본으로 자동 커밋 모드가 활성화되어 있음

### 데이터 제어어
-------
    - 'DCL(Data Control Language)' : 데이터에 대한 접근이나 기타 권한을 제어하는 문장.
    - GRANT  : 특정 사용자에게 특정 작업을 수행할 수 있는 권한을 부여함.
    - REVOKE : 부여된 권한을 회수함.

