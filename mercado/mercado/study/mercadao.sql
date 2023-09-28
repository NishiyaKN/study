create table usuario(
    id_usuario int,
    nome varchar(100),
    email varchar(100),
    senha varchar(40),
    primary key(id_usuario)
);

create table produto(
    id_produto int,
    nome varchar(100),
    categoria varchar(200),
    quantidade int,
    preco double(6,2),
    primary key(id_produto)
);

create table admin(
    id_admin int,
    login varchar(50),
    senha varchar(50),
    primary key(id_admin)
);

create table distribuidora(
    id_distri int,
    nome varchar(100),
    endereco varchar(200),
    CNPJ int,
    primary key(id_distri)
);