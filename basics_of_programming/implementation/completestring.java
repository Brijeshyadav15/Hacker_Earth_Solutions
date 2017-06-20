    import java.io.BufferedReader;
    import java.io.InputStreamReader;
    import java.util.HashSet;
     
    class TestClass {
    public static void main(String args[]) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String line = br.readLine();
    int N = Integer.parseInt(line);
    for (int i = 0; i < N; i++) {
    String s = br.readLine();
    HashSet<Character> alphset = new HashSet<>();
    for (int j = 0; j < s.length(); j++) {
    alphset.add(s.charAt(j));
    }
    if (alphset.size() == 26)
    System.out.println("YES");
    else
    System.out.println("NO");
    }
     
    }
    }

