export default async function Page({ params }) {

   // fetch your blog post by its slug

let languages = ["python", "javascript", "java", "cpp", "cs","c"]
if (languages.includes(params.slug)) {
  
    const { slug } = await params
    return <div>My Post: {slug}</div>
  
}
else{
  return <div>post not found</div>
}
}