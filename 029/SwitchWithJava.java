public class phone {
    public static void main(String[] args){
        String brand = "oneplus";

        switch(brand){
            case "apple":
                System.out.println("apple");
                break;
            case "oneplus":
                System.out.println("oneplus");
                break;
            case "samsung":
                System.out.println("samsung");
                break;
            case "oneminus":
                System.out.println("oneminus");
                break;
            default:System.out.println("Oh, no phone");
            break;
        }
    }
}
