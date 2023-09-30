create table usuario(
    id_usuario int,
    nome varchar(100),
    email varchar(100),
    senha varchar(50),
    primary key(id_usuario)
);

create table produto(
    id_produto int,
    nome varchar(100),
    categoria varchar(100),
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

create table fornecedor(
    id_forn int,
    nome varchar(100),
    endereco varchar(300),
    cnpj varchar(14),
    primary key(id_forn)
);
