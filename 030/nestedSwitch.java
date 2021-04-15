public class nestedSwitch {
    public static void main(String[] args){
        String name = "boi";
        int age = 30; //in multiples of 10
        switch(name){
            case "boi":
                System.out.println("hi boi");
                switch (age){
                    case 0:
                    case 10:
                    case 20: System.out.println("under 20");
                    break;
                    case 30:
                    case 40:
                    case 50:System.out.println("quite young");
                        break;
                }
            case "rock":
                System.out.println("hi rock");
                break;
            default:System.out.println("No ones here");
        }
    }
}
