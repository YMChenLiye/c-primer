void f(destination &d)
{
	connection conn = connect(&d);
	std::shared_ptr<connection> p(&conn, [](connection *p){ disconnect(*p);} );
	std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}

