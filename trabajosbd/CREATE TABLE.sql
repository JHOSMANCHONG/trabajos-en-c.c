CREATE TABLE IF NOT EXISTS EMPLEADOS(
    numero INT NOT NULL,
    nombre VARCHAR (50),
    salario float (6,2) ZEROFILL,
    categoria CHAR (30),
    sexo ENUM ('M','F'),
    departamento CHAR (2),
    PRIMARY KEY (numero) ENGINE=innoDB;
)