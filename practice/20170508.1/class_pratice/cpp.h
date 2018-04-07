class Screen {
public:
typedef std::string::size_type index;
// return character at the cursor or at a given position
char get() const { return contents[cursor]; }
char get(index ht, index wd) const;
// remaining members
private:
std::string contents;
index cursor;
index height, width;
};
