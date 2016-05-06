#pragma once
namespace CS2312
{
	template <typename type>
	class less
	{
	public:
		bool operator () (const type & rhs, const type & lhs) { if (rhs < lhs) return true; else false; }
	};

	template <>
	class less<std::string>
	{
	public:
		bool operator () (const std::string & rhs, const std::string & lhs) { if (rhs < lhs) return true; else false; }
	};

	template <>
	class less<const char *>
	{
	public:
		bool operator () (const char * rhs, const char * lhs)
		{
			bool yes = false;
			int i = 0;
			do 
			{
				if (rhs[i] < lhs[i])
				{
					return true;
				}
				else
					yes = false;
				i++;
			} while (rhs[i] < lhs[i] || rhs[i] == lhs[i]);
			return yes;
			
		}
	};
}