class Building{
	public:
		Building( int id );
		Building();
		Building (const Building& rhs);
		~Building();
		void print(std::ostream& out) const ;
		Building& operator=( const Building& rhs);
	private:
		int id_;
};

