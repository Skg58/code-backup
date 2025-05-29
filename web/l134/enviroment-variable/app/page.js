
import Image from "next/image";

export default function Home() {
  return (
    <>
    the id is {process.env.NEXT_PUBLIC_ID} &nbsp;
    and the secret is {process.env.NEXT_PUBLIC_SECRET}
    </>
  );
}
