class Building{
	public:
		Building( int id );
		Building();
		~Building();
		void print(std::ostream& out) const ;
		Building& operator=( const Building& rhs);
	private:
		int id_;
};

